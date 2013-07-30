object SumPrime {
	def isPrime(n: BigInt) = {
		var check=true
		for ( i <- 2 to (n/2).intValue if (check)) if ((n%i)==0) check=false
		check
	}
	def sumOfPrimes(n: BigInt) = {
		var sum:BigInt=0
		for (i <- 2 to n.intValue) if (isPrime(i)) sum=sum+i
		sum
	}
	def main(args: Array[String]) {
		var sum:BigInt = sumOfPrimes(10)
		println(sum)
	}
}
