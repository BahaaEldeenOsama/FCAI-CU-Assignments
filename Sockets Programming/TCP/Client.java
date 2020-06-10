import java.io.*;  
import java.net.*;
import java.util.Scanner; 

public class Client {
	
	private static Scanner scanner;
    private static	DataOutputStream DOS;
	private static int port = 55000;
    private static Socket socket;
	
	public static void main(String[] args) 
	{
		try {
			
			socket=new Socket("localhost",port);

			System.out.println("\t\t\t\t<<< ... Welcome to Client side ... >>>");
			System.out.println("Please Enter your Number : ");

			scanner = new Scanner(System.in);
				
			int myNumber = scanner.nextInt();
			
			DOS=new DataOutputStream(socket.getOutputStream());  
				
			DOS.writeInt(myNumber);  
				
			DOS.flush();  
				
			DOS.close();  
				
			socket.close();   
			
						
		} catch (IOException e) {
			
			System.out.println("********************");
			System.out.println("Can't access Server.");
			System.out.println("********************");
			System.out.println("\n\n\n");
			System.exit(1);		
			}
		
	}
	
}
