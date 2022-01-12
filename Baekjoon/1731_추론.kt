import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n=readLine().toInt()
    val a=IntArray(n)
    var i=0
    repeat(n){
        a[i]=readLine().toInt()
        i++
    }
    var plus=true
    var mul=true
    var d=a[1]-a[0]
    var q =a[1].toDouble()/a[0].toDouble()
    for(i in 2..n-1){
        if(a[i]-a[i-1]!=d)
            plus=false
        if(a[i].toDouble()/a[i].toDouble()!=q)
            mul=false
    }
    if(plus)
        print(a[n-1]+d)
    else
        print(a[n-1]*q.toInt())
}
