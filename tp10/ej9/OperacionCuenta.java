public class OperacionCuenta implements Runnable {
    private Cuenta cuenta;
    private boolean depositar;
    private int monto;
    private Semaforo semaforo;

    public OperacionCuenta(Cuenta cuenta, boolean depositar, int monto, Semaforo semaforo) {
        this.cuenta = cuenta;
        this.depositar = depositar;
        this.monto = monto;
        this.semaforo = semaforo;
    }

    @Override
    public void run() {
        String nombre = Thread.currentThread().getName();

        semaforo.p();
        if (depositar) {
            System.out.println(nombre + " deposita " + monto);
            cuenta.deposita(monto);
        } else {
            System.out.println(nombre + " retira " + monto);
            cuenta.retira(monto);
        }

        System.out.println(nombre + " saldo actual: " + cuenta.getSaldo());
        semaforo.v();
    }
}
