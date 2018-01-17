
public class Heartbeat {
	public static void main(String[] args) {
		long x = System.currentTimeMillis();
		while (true) {
			System.out.println((System.currentTimeMillis() - x));
			x = System.currentTimeMillis();
			try {
				Thread.sleep(1000);
			} catch (Exception e) {}
		}
	}
}
