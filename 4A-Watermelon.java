import java.util.Scanner;
public final class Watermelon
{
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       int n=Integer.parseInt(sc.nextLine());
       if ((n>=1) && (n<=100)){
           if(n%2==0 && n>2){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
    }
    else{
        System.out.println("NO");
    }
}
}