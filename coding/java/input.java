import java.util.Scanner;
public class input{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		sc.nextLine();
		String b=sc.nextLine();
		char c=sc.next().charAt(0);

		System.out.println("a is"+a+" b is "+b+" c is "+c);
	}
}