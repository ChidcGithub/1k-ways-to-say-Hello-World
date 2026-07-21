// Mock RxJS Observable
const Observable = {
    from: (arr) => ({
        subscribe: (observer) => {
            arr.forEach(item => observer.next(item));
            observer.complete();
        }
    })
};
Observable.from(["Hello", ", ", "World!"]).subscribe({
    next: s => process.stdout.write(s),
    complete: () => console.log()
});
