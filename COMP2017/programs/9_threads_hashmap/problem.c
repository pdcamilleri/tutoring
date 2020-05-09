



single threaded

account = getCurrentFunds() // 10
account = account - 5
account == 5
updateCurrentFunds(account) // 5

account = getCurrentFunds() // 5
account = account - 2
account == 3
updateCurrentFunds(account) // 3




(not thread safe)
thread 1                     thread 2

// critical section - two threads can read/write to the same bit of data
// 1) when one thread can write and another thread can read that value.
// 2) when one thread can write and another thread can also write.

account = getCurrentFunds() // 10 (read)
                            account = getCurrentFunds() // 10 (read)
account = account - 5
                            account = account - 2
account == 5
                            account == 8
updateCurrentFunds(account) // write
                            updateCurrentFunds(account) // write


        spent 7
        account only 2

        race condition (bad)



thread 1 (buy shoes)                    thread 2 (buy pants)

account = getCurrentFunds() // 10
account = account - 5
account == 5
                            account = getCurrentFunds() // 10
updateCurrentFunds(account) // 5
                            account = account - 2
                            account == 3
                            updateCurrentFunds(account) // 8


synchronisation between threads

(POSIX/LINX - MAC PC)

lock/mutex/semaphore
mutex = mutually exclusive (only one at a time)

only one thread can access a critical section at a time.

example with locks

thead-safe
        thread 1                     thread 2
lock = getLock()
                                lock = getLock() // wait - block until lock is released

account = getCurrentFunds() // 10
account = account - 5
account == 5
updateCurrentFunds(account) // 5
lock = releaseLock()
                                lock = getLock() // lock is acquired
                                account = getCurrentFunds() // 5
                                account = account - 2
                                account == 3
                                updateCurrentFunds(account) // 3
                                lock = releaseLock()

    example of deadlock

    thread 1                     thread 2
    lock1 = getLock(1)
                            lock2 = getLock(2)
    lock2 = getLock(2) // wait
                            lock1 = getLock(1) // wait


                                    code below never gets run, threds are waiting on eachother
    variable1 = ...
    variable2 = ...
    lock2 = getLock(2)
    lock1 = getLock(1)

                            variable1 = ...
                            variable2 = ...
                            lock2 = getLock(2)
                            lock1 = getLock(1)



example of deadlock

        thread 1                     thread 2
lock1 = getLock(1)
                            lock2 = getLock(2) // wait
lock3 = getLock(3)
                            lock1 = getLock(1) // wait
lock2 = getLock(2)
                            lock2 = getLock(3)






