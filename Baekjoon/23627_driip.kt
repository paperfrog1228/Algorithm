import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val s = readLine();
    if(s.length>=5) {
        if (s.substring(s.length - 5, s.length) == "driip")
            println("cute")
        else
            println("not cute")
    }
    else println("not cute")
}
