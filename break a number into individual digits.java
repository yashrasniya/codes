import java.util.Scanner;

public class break{
public static void main(String args[])
{
Scanner obj=new Scanner(System.in);
int num=obj.nextInt();
while(num>10){
System.out.println((num%10));
num=(num-num%10)/10;

}
System.out.println(num);
}
}
