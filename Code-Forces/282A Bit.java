import java.util.Scanner;
public final class Bit{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int count=0;
        int n=Integer.parseInt(sc.nextLine());
        for (int i=0;i<n;i++){
            String x=sc.nextLine();
            if (x.equals("X++"))
            {
                count++;
            }
            else if(x.equals("--X"))
            {
                --count;
            }
            else if(x.equals("++X")){
                ++count;
            }
            else if(x.equals("X--")){
                count--;
            }
        }
        System.out.println(count);
    }
}
