import java.util.Scanner;
public final class LongWords
{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
        for(int i=0;i<n;i++){
            String s=sc.nextLine();
            if (s.length() >10){
                System.out.print(s.charAt(0));
                System.out.print(s.length()-2);
                System.out.print(s.charAt(s.length()-1));
                System.out.println();
            }
            else{
                System.out.println(s);
            }
        }

    }
}
