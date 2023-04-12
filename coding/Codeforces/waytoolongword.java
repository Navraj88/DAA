import java.util.Scanner;

public class waytoolongword{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        String s[]= new String[t];
        for(int i=0;i<t;i++){
            s[i]=sc.nextLine();
        }
        int i=0;
        while(i<t){
            if(s[i].length()>10){
                 System.out.print(s[i].charAt(0));
                 System.out.print(s[i].length()-2);
                 System.out.print(s[i].charAt(s[i].length()-1)+"\n");
            }
            else{
                System.out.println(s[i]);
            }
            i++;
        }
    }
};