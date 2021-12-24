import java.io.*
import java.math.BigInteger

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    for (i in 1..3) {
        val n = readLine().toInt()
        var s=BigInteger.ZERO
        for (j in 1..n)
            s+=readLine().toBigInteger()
        if(s.equals(BigInteger.ZERO))
            println('0')
        else if(s.compareTo(BigInteger.ZERO)>0)
            println('+')
        else
            println('-')
    }
}