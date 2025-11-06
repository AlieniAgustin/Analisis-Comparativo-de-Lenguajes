public class Main {
    public static void main(String[] args) {
        Semaforo semaforo = new Semaforo(2); // init(s,2) → solo dos hilos pueden pasar a la vez

        Runnable tarea = () -> {
            String nombre = Thread.currentThread().getName();
            System.out.println(nombre + " quiere entrar");
            semaforo.p(); // pide permiso
            System.out.println(nombre + " entró");
            try {
                Thread.sleep(1000); // simulamos trabajo dentro de la sección crítica
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
            System.out.println(nombre + " sale");
            semaforo.v(); // libera el semáforo
        };

        // Creamos y lanzamos tres hilos
        new Thread(tarea, "Hilo-1").start();
        new Thread(tarea, "Hilo-2").start();
        new Thread(tarea, "Hilo-3").start();
    }
}
