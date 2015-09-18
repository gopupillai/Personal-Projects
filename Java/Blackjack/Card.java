




//********** Card Class *****************

public class Card
{
		// enum type constants for suits
		public enum Suit
		{
			CLUBS, DIAMONDS, HEARTS, SPADES
		}

		public static Suit suitFromInteger(int x) {
			switch(x) {
				case 0:
					return Suit.CLUBS;
				case 1:
					return Suit.DIAMONDS;
				case 2:
					return Suit.HEARTS;
				case 3:
					return Suit.SPADES;
			}
			return Suit.SPADES;
		}

		public static char valueFromInteger(int x) {
			if (x < 0 || x > 12) {
				System.out.println("Incorrect index for card value inputted");
				return '0';
			} else {
				if (x <= 7) {
					x = x + 50;
					return (char)x;
				} else if (x == 8) {
					return 'T';
				} else if (x == 9) {
					return 'J';
				} else if (x == 10) {
					return 'Q';
				} else if (x == 11) {
					return 'K';
				} else {
					return 'A';
				}
			}
		}

		// Private Data
		private char value;
		private Suit suit;
		private boolean flag;

		// Constructor with 2 arguments
		public Card(char value, Suit suit)
		{
			set(value, suit);
		}

		public Card(char value, Suit suit, boolean flag) {
			if (isValid(value, suit)) {
				this.flag = flag;
				this.value = value;
				this.suit = suit;
			} else {
				System.out.println("Error with setting card values");
				this.flag = true;
			}
		}

		// Constructor with no arguments
		public Card()
		{
			this('A', Suit.SPADES);
		}

		// Mutator
		public boolean set(char value, Suit suit)
		{
			if (isValid(value, suit))
			{
				this.flag = false;
				this.value = value;
				this.suit = suit;
				return true;
			}
			else
			{
				this.flag = true;
				return false;
			}
		}

		public void adjustFlag(boolean flag) {
			this.flag = flag;
		}

		// Accessors
		public char getValue()
		{
			return value;
		}

		public Suit getSuit()
		{
			return suit;
		}

		public boolean getFlag()
		{
			return flag;
		}

		// Ensures validity of card
		private boolean isValid(char value, Suit suit)
		{
			char upVal;
			upVal = Character.toUpperCase(value);

			// Check for validity of value
			if (upVal == 'A' || upVal == 'K' || upVal == 'Q' || upVal == 'J' || upVal == 'T' || (upVal >= '2' && upVal <= '9'))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
}