




//********** Card Class *****************

class Card
{
		// enum type constants for suits
		enum Suit
		{
			CLUBS, DIAMONDS, HEARTS, SPADES
		}

		// Private Data
		private char value;
		private Suit suit;
		private boolean errorFlag;

		// Constructor with 2 arguments
		public Card(char value, Suit suit)
		{
			set(value, suit);
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
				this.errorFlag = false;
				return true;
			}
			else
			{
				this.errorFlag = true;
				return false;
			}
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

		public boolean getErrorFlag()
		{
			return errorFlag;
		}

		// Ensures validity of card
		private boolean isValid(char value, Suit suit)
		{
			char upVal;
			upVal = Character.toUpperCase(value);

			// Check for validity of value
			if (upVal == 'A' || upVal == 'K' || upVal == 'Q' || upVal == 'J' || upVal == 'T' || (upVal >= '2' && upVal <= '9'))
			{
				return true
			}
			else
			{
				return false
			}
		}
}