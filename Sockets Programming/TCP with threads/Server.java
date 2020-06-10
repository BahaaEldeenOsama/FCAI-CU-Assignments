import java.net.*;
import java.io.*;



public class Server extends Thread  {
    
   private static ServerSocket  servSocket; 
   private static Socket socket;
   private static final int port =45000; 
   private static DataInputStream DIS; 
   
   public Server() throws IOException 
      {
	      servSocket = new ServerSocket(port);
	      servSocket.setSoTimeout(90000);///Time to live. 90 Second = 1.5 Minute;
	   }
	
   public void run() 
	   {
      while(true) 
            {
        
            try {
            	
            	System.out.println("\t\t\t\t<<<....  Welcome to Server side ..... >>>");
            	System.out.println("\t\t\t\t<<<....  Server is Up and Runinng ... >>> \n" );
            	socket = servSocket.accept();
            	DIS = new DataInputStream(socket.getInputStream());
                String str = DIS.readUTF();     
                
                System.out.println("**********************************");
                System.out.println("New Client connect with the server");
                System.out.println("**********************************\n");
                
                Find_Grade(str);
            	socket.close();
         } 
            
		catch (SocketTimeoutException s) 
            {
			
			System.out.println("\n\n");
			System.out.println("***********************************************");
            System.out.println("<<<<Socket timed out>>>>");
			System.out.println("***********************************************");
			System.out.println("\n\n");
            System.exit(1);
            } 
       catch (IOException e) 
            {
    	         System.out.println("\n\n\n");
            	 System.out.println("***************************");
    	         System.out.println("Connection Not Established.");
    	         System.out.println("***************************");
    	         System.out.println("\n\n");
    	         System.exit(1);
            }
      
          
          }
   
	   
	   }

   
   private void Find_Grade(String str) 
   {
	 
	   int NumStudent=8;
	   int pos_Name=0,pos_Grade=0;
	   boolean flage = false;
	   String []name= {"Bahaa","Hossam","Saif","Ahmed","Nur","Fadi","Ahmed","Yasser"};///8
	   String []Grade= {"B+","D+","A","C+","D","A+","B+","C"};///8
	   
	   for(int i=0;i<NumStudent;++i)
	   {
		   if(str.equalsIgnoreCase(name[pos_Name]))
		   {
			   System.out.println("Student name = "+name[pos_Name]);
			   System.out.println("Student grade = "+Grade[pos_Grade]);
			   flage=true;
		   }
		   ++pos_Name;++pos_Grade; 
	   }
	   if(!flage)
	   {
		    System.out.println("\n\n");
			System.out.println("***********************************************");
		    System.out.println("This Student name not exist in list of student.");   
			System.out.println("***********************************************");
			System.out.println("\n\n");
			
	   }
	   
  }
   
   
   
   

public static void main(String [] args) 
   {   
      try {
    	  	Thread t = new Server();
    	  	t.start();
          } 
        
     catch (IOException e) 
          {
    	 
    	 		System.out.println("\n\n");
    	 		System.out.println("***********************************************");
    	        System.out.println("Connection Not Established.");
    			System.out.println("***********************************************");
    			System.out.println("\n\n");
    	 		System.exit(1);
          }


   }
}
