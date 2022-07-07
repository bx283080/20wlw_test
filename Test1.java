public class Test1{
   public static void main(String args[]){
      TestThread pm1 = new TestThread("One");
      pm1.start();
      TestThread pm2 = new TestThread("Two");
      pm2.start();
   }
}
class TestThread extends Thread{
  private String sTname=" ";
  TestThread(String s){
     sTname = s;
   }
  public void run(){
    for(int i=0;i<2;i++){
  try{
     sleep(1000);
  }catch(InterruptedException e){}
     System.out.print(sTname+" ");
  }
 }
}