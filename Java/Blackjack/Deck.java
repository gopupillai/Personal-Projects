import java.util.ArrayList;

// Standard deck without jokers
public class Deck {

	private ArrayList<Card> cardDeck;
	private boolean shuffle; // If false indicates unshuffled deck

	// Regular constructor for deck
	public Deck() {
		this.cardDeck = new ArrayList<Card>(52);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 13; j++) {
				Card newCard = new Card(Card.valueFromInteger(j), Card.suitFromInteger(i));
				this.cardDeck.add(newCard);
			}
		}
		this.shuffle = false;
	}

	public void shuffleUsingNewDeck(int cut) {
		ArrayList<Card> newDeck = new ArrayList<Card>(52);
		int i = 0, j = cut;
		for (int k = 0; k < 52; k++) {
			Card card = new Card();
			if (k % 2 == 0 && i < cut) {
				card.set((this.cardDeck.get(i)).getValue(), (this.cardDeck.get(i)).getSuit());
				newDeck.add(card);
				i++;
			} else if (j < 52) {
				card.set((this.cardDeck.get(j)).getValue(), (this.cardDeck.get(j)).getSuit());
				newDeck.add(card);
				j++;
			} else {
				card.set((this.cardDeck.get(i)).getValue(), (this.cardDeck.get(i)).getSuit());
				newDeck.add(card);
				i++;
			}
		}
		this.cardDeck.clear();
		for (int k = 0; k < 52; k++) {
			this.cardDeck.add(newDeck.get(k));
		}
		this.shuffle = true;
	}

	// Accesses the top card of the deck at position index 0 and then pops it off the deck
	public Card getTopCard() {
		Card returnCard = this.cardDeck.get(0);
		this.cardDeck.remove(0);
		return returnCard;
	}

	public boolean beenShuffled() {
		return this.shuffle;
	}

	// Helper object for optimized shuffle using mapping
	private class Node {
		private int src_index; // Holds the source index of the card
		private Card card; // Holds the card

		public Node(int i, Card input) {
			this.src_index = i;
			this.card = new Card(input.getValue(), input.getSuit(), input.getFlag());
		}

		public Card getCard() {
			return this.card;
		}

		public int getIndex() {
			return this.src_index;
		}

		public void setFlag(boolean flag) {
			this.card.adjustFlag(flag);
		}
	}

	public void shuffleUsingMapping(int cut) {

		for (int i = 0; i < cut; i++) {
			Node source = new Node(i, this.cardDeck.get(i));
			while ((source.getCard()).getFlag() == false) {
				source.setFlag(true);
				Node destination;
				if (source.getIndex() < cut) {
					if ((source.getIndex()+1)*2 <= 52) {
						destination = new Node((source.getIndex())*2, this.cardDeck.get((source.getIndex())*2));
						this.cardDeck.add((source.getIndex())*2, source.getCard());
					} else {
						destination = new Node(52-cut+source.getIndex(), this.cardDeck.get(52-cut+source.getIndex()));
						this.cardDeck.add(52-cut+source.getIndex(), source.getCard());
					}
				} else {
					destination = new Node(((source.getIndex()-cut)*2)+1, this.cardDeck.get(((source.getIndex()-cut)*2)+1));
					this.cardDeck.add(((source.getIndex()-cut)*2)+1, source.getCard());
				}
				source = new Node(destination.getIndex(), destination.getCard());
			}
		}
		this.shuffle = true;
	}

}