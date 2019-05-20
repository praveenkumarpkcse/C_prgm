import java.util.*;
import java.io.*;
public class even_odd
{
	public static void main(String[] args)
	{
	   
	try
      {
        int num;
        Scanner s= new Scanner(System.in);
        num=s.nextInt();
		
        if(num % 2==0)
        {
            System.out.println("Even");
        }
        else
        {
             System.out.println("Odd");
        }
      }
     catch(Exception e)
     {
        System.out.println("invalid");
     }
	}
}
