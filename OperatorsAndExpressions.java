public class ForLoopStatement{
  public static void main(String[] args){
    int i,j;
    for(i=1;i<5;i++){       //i 循环
        for(j=1;j<=i;j++)   //j 循环
            System.out.print(i+"×"+j+"="+i*j+" ");
    System.out.println();
    }
  }
}

