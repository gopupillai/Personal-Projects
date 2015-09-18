

public class Blackjack {
		
	public static void main(String[] args) {

		Deck deck = new Deck();
		for (int i = 0; i < 52; i++) {
			Card topCard = deck.getTopCard();
			outputCard(topCard);
		}
		deck = new Deck();
		deck.shuffleUsingMapping(2);
		for (int i = 0; i < 52; i++) {
			Card topCard = deck.getTopCard();
			outputCard(topCard);
		}

		/*
		Hand hand1 = new Hand("Test");
		System.out.println(hand1.getName());
		Card test = new Card('A', Card.suitFromInteger(1));
		System.out.println(test.getSuit());
		*/
	}

	public static void outputCard(Card card) {
		System.out.println("Card is: " + card.getValue() + " of " + card.getSuit());
		return;
	}

}