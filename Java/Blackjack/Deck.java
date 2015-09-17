import java.util.ArrayList;

// Standard deck without jokers
public class Deck {

	private ArrayList<Card> cardDeck;

	// Regular constructor for deck
	public Deck() {
		this.cardDeck = new ArrayList<Card>(52);
		for (int i = 1; i < 14; i++) {
			Card temp;
			if (i == 10) {
				temp = new Card('T', CLUBS);
			} else if (i == 11) {
				temp = new Card('J', CLUBS);
			} else if (i == 12) {
				temp = new Card('Q', CLUBS);
			}
			//Card temp = new Card((char)i, CLUBS);
		}
	}

	public void shuffle(int cut) {


	}

}