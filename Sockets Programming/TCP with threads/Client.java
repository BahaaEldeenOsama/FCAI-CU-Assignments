import java.io.*;
import java.net.Socket;
import java.util.Scanner;	

public class Client {
	
	
	private static Scanner scanner;
	private static final int port=45000;
	private static Socket socket;
	private static DataOutputStream DOS;
	
	
	
	public static void main(String[] args) {
		
		
		try {
			
		    socket=new Socket("localhost",port);			
			System.out.println("\t\t\t\t\t<<< ... Welcome to Client side ... >>>");
			System.out.println(">>>Please Enter student name ...");

			scanner = new Scanner(System.in);
			String MyName = scanner.next();
			
			DOS=new DataOutputStream(socket.getOutputStream());  
				
			DOS.writeUTF(MyName);  
			
			DOS.flush();  
				
			DOS.close();  

			socket.close();
		    } 
		catch (IOException e) 
		   {

	 		System.out.println("\n\n");
	 		System.out.println("***********************************************");
			System.out.println("Can't access server.(Some thing wrong in port) ");
			System.out.println("***********************************************");
			System.out.println("\n\n");
	
			
		   }	

		
		
	}

}
