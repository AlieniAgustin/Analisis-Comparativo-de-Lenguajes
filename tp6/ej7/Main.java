public class Main{
    public static void main(String[] args) {
        try{
            for(int i = 0; i < 10; i++){
                Person p = new Person(i, "jv");
                System.out.println("Cree la persona con dni " + p.getDni() + "\n");
            }
            
            System.gc();
            Thread.sleep(5000);
        }catch(Exception e){
            e.printStackTrace();
        }
    }

}
