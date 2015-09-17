

public class Blackjack {
		
	public static void main(String[] args) {
		Hand hand1 = new Hand("Test");
		System.out.println(hand1.getName());
		Card test = new Card('A', Card.suitFromInteger(1));
		System.out.println(test.getSuit());
	}


}