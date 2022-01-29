import java.util.*
fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n=readLine()!!.toInt()
    var a=IntArray(55)
    for(i in 0..n-1){
        a[i]=readLine()!!.toInt()
    }
    var l=1
    var r=1
    var now=a[0]
    for(i in 1..n-1){
        if(now<a[i]){
            l++
            now=a[i]
        }
    }
    now=a[n-1]
    for(i in n-2 downTo 0){
        if(now<a[i]){
            r++
            now=a[i]
        }
    }
    print("$l\n$r")
}