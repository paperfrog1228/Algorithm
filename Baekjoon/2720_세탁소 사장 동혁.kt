import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val t=readLine().toInt()
    repeat(t){
        var n=readLine().toInt()
        val a=n/25
        n=n%25
        val b=n/10
        n=n%10
        val c=n/5
        n=n%5
        println("$a $b $c $n")
    }
}
