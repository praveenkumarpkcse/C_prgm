import java.util.*;
import java.io.*;
public class even_odd
{
	public static void main(String[] args)
	{
	   
		 try
      {
        int number;
        Scanner s= new Scanner(System.in);
        number=s.nextInt();
		
        if(number % 2==0)
        {
            System.out.println("Even");
        }
        else
        {
             System.out.println("ODD");
        }
      }
     catch(Exception e)
     {
        System.out.println("Invalid");
     }
	}
}
