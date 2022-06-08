//Code by Rajvi Desai
import java.util.Scanner;
 public final class Team{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int count=0,s;
        int[] a=new int[3];
        for(int i=0;i<n;i++){
            s=0;
            for(int j=0;j<3;j++){
                a[j]=sc.nextInt();
                s=a[0]+a[1]+a[2];
            }
            if(s>=2){
                count++;
            }
            }
        System.out.print(count);

    }
}
