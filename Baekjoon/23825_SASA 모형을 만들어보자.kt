import java.io.*
import java.lang.Integer.min

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var (a, b) = readLine().split(' ').map { it.toInt() }
    println(min(a,b)/2)
}
