import java.io.*
import java.lang.Integer.min

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n, w, h, l) = readLine().split(' ').map { it.toInt() }
    print(min((w / l) * (h / l), n))
}
