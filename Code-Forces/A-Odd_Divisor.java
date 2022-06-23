import java.util.Scanner;
public class Solution1{
public static void main(String args[]) throws NumberFormatException{
    Scanner sc=new Scanner(System.in);
    int n=Integer.parseInt(sc.nextLine());
    long a[]=new long[n];
    for(int i=0;i<n;i++){
        a[i]=Long.parseLong(sc.nextLine());
    }
    
    for(int i=0;i<n;i++){
        while(a[i]%2==0)
            a[i]/=2;
        if(a[i]==1){
            System.out.print("NO\n");
        }
        else{
            System.out.print("YES\n");
        }
    }
    
    
}
}
