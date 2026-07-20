import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        SubmissionPublisher<String> publisher = new SubmissionPublisher<>();
        publisher.subscribe(new Flow.Subscriber<>() {
            public void onSubscribe(Flow.Subscription s) { s.request(1); }
            public void onNext(String item) { System.out.println(item); }
            public void onError(Throwable t) {}
            public void onComplete() {}
        });
        publisher.submit("Hello, World!");
        publisher.close();
        Thread.sleep(100);
    }
}
