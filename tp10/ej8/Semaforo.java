import java.util.LinkedList;
import java.util.Queue;

public class Semaforo {
    private int contador;
    private final Queue<Thread> colaEspera;

    // init(s, n): inicializa el semáforo con valor n y cola vacía
    public Semaforo(int n) {
        this.contador = n;
        this.colaEspera = new LinkedList<>();
    }

    // p(s): el hilo pide permiso para continuar
    public synchronized void p() {
        if (contador > 0) {
            contador--;
        } else {
            // contador == 0 -> bloquear el hilo
            Thread hiloActual = Thread.currentThread();
            colaEspera.add(hiloActual);
            try {
                while (colaEspera.contains(hiloActual)) {
                    wait(); // hilo bloqueado hasta que sea despertado por v()
                }
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }

    // v(s): el hilo libera el semáforo
    public synchronized void v() {
        if (!colaEspera.isEmpty()) {
            // Despertar un hilo en espera
            Thread hiloDesbloqueado = colaEspera.poll();
            notifyAll(); // despierta los hilos, pero solo el primero de la cola saldrá del while
        } else {
            contador++;
        }
    }

    public synchronized int getContador() {
        return contador;
    }

    public synchronized int getCantidadEsperando() {
        return colaEspera.size();
    }
}
