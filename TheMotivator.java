public class TheMotivator {
	public void upcomingEvents() {
	System.out.println("Dinner at Katie's on Friday");
}

	public void thoughtForDay(int score) {
		if (score == 100)
			System.out.println("You're awesome!!!");
		else if (score > 90)
			System.out.println("That's great");
		else if (score > 60)
			System.out.println("That's good ");
		else
			System.out.println("Well, what can I say?");

		for (String event : events)
			System.out.println(event);


	}


	public void createEvents() {
		events.add("We're going to a movie on Saturday");
		events.add("Study session on Sunday - Jim's house");
	}


	public static void main(String[] args) {
		TheMotivator tm = new TheMotivator();

		private ArrayList<String> events = new ArrayList<String>();

		tm.feedback(60);
		tm.upcomingEvents();
		tm.createEvents();

	}
}

