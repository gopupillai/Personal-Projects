import java.util.ArrayList;

public class Hand {

	// Private data
	private ArrayList<Card> handList;
	private int value;
	private String playerName;

	// Constructor with 1 argument
	public Hand(String name)
	{
		this.playerName = name;
		this.handList = new ArrayList<Card>();
	}

	public String getName() {
		return this.playerName;
	}



}