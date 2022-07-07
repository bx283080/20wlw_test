public class Test1 {
    public static void main (String[] args){
        try{
            throw new Throwable();
        }catch(Throwable e){
            System.out.print(e.getMessage());
        }
    }
}