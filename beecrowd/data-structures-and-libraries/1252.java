import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    static boolean check(int num,int chave,int m){
        if(chave%m!=num%m){
            return chave<num;
        }
        else if(chave%2==0 && num%2==0){
            return chave>num;
        }
        else if(chave%2!=0 && num%2!=0){
            return chave<num;
        }
        else{
            if(chave%2==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
 
    public static void main(String[] args) throws IOException {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),m=sc.nextInt();
        while(n!=0 && m!=0){
            int[] array=new int[n];
            for(int i=0;i<n;i++){
                array[i]=sc.nextInt();
            }
            for(int i=1;i<n;i++){
                int chave=array[i];
                int k=i-1;
                while(k>=0 && check(array[k],chave,m)){
                    array[k+1]=array[k];
                    k--;
                }
                array[k+1]=chave;
            }
            System.out.printf("%d %d\n",n,m);
            for(int i=0;i<n;i++){
                System.out.println(array[i]);
            }
            n=sc.nextInt();
            m=sc.nextInt();
        }
        System.out.printf("%d %d",n,m);
    }
 
}
