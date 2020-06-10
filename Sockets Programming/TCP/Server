import java.io.*;  
import java.net.*;  

public class Server 
{
	
   static int port = 55000;
   private static Socket socket;	
   private static ServerSocket serSocket;
   private static  DataInputStream DIS;
   
	public static void main(String[] args) 
	{
		
		try 
		{

			System.out.println("\t\t\t\t<<<....  Welcome to Server side ..... >>>");
			
			serSocket=new ServerSocket(port);  	
			
			//establishes connection			
			socket=serSocket.accept();   
			
			System.out.println(" You are now connected Successfully !!");	
			
			DIS=new DataInputStream(socket.getInputStream()); 			
			
			int num = DIS.readInt(); 
			System.out.println("The Client Terminal Input Number is : "+num );  
			
			

			
			if(IS_even(num))
				{
					System.out.println("The number is even.");
				}
			else{
					System.out.println("The number is odd.");
				}
			
			
			if(IS_prime(num))
				{
					System.out.println("The number is prime.");
				}
			else
				{
					System.out.println("The number is not prime.");
				}
	
			
			serSocket.close();  
			
			
		} catch (IOException e) {
			System.out.println("***************************");
			System.out.println("Connection Not Established.");
			System.out.println("***************************");
			System.out.println("\n\n\n");
			System.exit(1);
		}	
		
	}
	

	private static boolean IS_prime(int number) {
		int sqrt = (int) Math.sqrt(number) + 1; 
		for (int i = 2; i < sqrt; i++) 
		{
			if (number % i == 0) 
				return false;
		}
		return true;
	}

	private static boolean IS_even(int number) {
	
		if(number%2==0)
			{
				return true;
			}
		else
			{
				return false;
			}
	}
	
	
	
}
