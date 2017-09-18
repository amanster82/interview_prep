package interview_prep;

public class uniqueCharacters {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		isUnique("aaa");

	}

	public static boolean isUnique(String str) {

		for (int i = 0; i < str.length(); i++) {
			for (int j = i + 1; j < str.length(); j++) {
				if (str.charAt(i) != str.charAt(j))
					continue;
				else{
					System.out.println("not unique\n");
					return false; 
				}
			}
		}
	System.out.println("it's unique!");
	return true;
	}

}
