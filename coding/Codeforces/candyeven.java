import java.lang.System;
import java.util.Scanner;


public class candyeven(){
    public static void main(String [] arg){
        Scanner s=new Scanner(Syatem.in);
        int t=s.nextInt();
        while(t>=0){
            int n=s.nextInt();
            int even=0,odd=0;
            while(n>0){
                int a=s.nextInt();
                if(a%2==0){
                    even+=a;
                }
                else{
                    odd+=a;
                }
                n--;
            }
            t--;
        }
    }
}







