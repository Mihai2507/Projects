import java.util.Scanner;

public class FunnyOnlineVoting{
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int varsta;
		int vot;
		String firstname;
		String lastname;
		int candidati1=0;
		int candidati2=0;
		int candidati3=0;
		int candidati4=0;
		System.out.println("*** Welcome to Romania's presidential election ***");
		System.out.println("Please enter your full name: First name and last name!");
		firstname = scanner.next();
		lastname=scanner.next();
		System.out.println("Hello "+ firstname + "!\nHow old are you?");
		varsta = scanner.nextInt();
		if(varsta>=18) {
			System.out.println("Ok. You are valid to vote.\nYou can vote now.");
			System.out.println("Vote 1 - Candidate 1: Mircea Geoana\nVote 2 - Candidate 2: Florin Calinescu\nVote 3 - Diana Sosoaca\nVote 4 - George Simion.");
			System.out.println("Vote 0 - if you don't want to vote someone.\nVote 5 - if you want to vote all of them.");
			vot = scanner.nextInt();
			if(vot==1) {
				System.out.println("You voted for Mircea Geoana.");
				candidati1++;
				System.out.println("Mircea Geoana won!");
			}
			if(vot==2) {
				System.out.println("You voted for Florin Calinescu.");
				candidati2++;
				System.out.println("Florin Calinescu won!");
			}
			if(vot==3) {
				System.out.println("You voted for Diana Sosoaca.");
				candidati3++;
				System.out.println("Diana Sosoaca won!");
			}
			if(vot==4) {
				System.out.println("You voted for George Simion.");
				candidati4++;
				System.out.println("George Simion won!");

			}
			if(vot==5) {
				System.out.println("You voted all of them.\nGreat. Your vote will be canceled.");
			}
			if(vot==0) {
				System.out.println("You voted none of them.\nGreat.");
			}
		}
		else if(varsta<18){
			System.out.println("You are not eligible to vote. I am sorry...");
			System.exit(0);
		}
	}
}
