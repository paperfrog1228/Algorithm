import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    while(true){
        var n=readLine().toInt()
        if(n==0) return
        while(n>=10){
            var t=0
            var d=10
            while(n>0) {
                t += n % d
                n/=10
            }
            n=t
        }
        println(n)
    }
}