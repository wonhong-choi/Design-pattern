import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

public class InputTest {
    public static void main(String[] args) throws IOException {
        try {
            System.out.println();
            try (InputStream is = new LowerCaseInputStream(
                new BufferedInputStream(
                    new FileInputStream("src/tt.txt")
                )
            )) {
                int c;
                while((c = is.read()) >= 0){
                    System.out.print((char)c);
                }
                System.out.println();
            }
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
