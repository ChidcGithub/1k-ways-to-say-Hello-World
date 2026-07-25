import Control.Concurrent (forkIO, newChan, writeChan, readChan)

main :: IO ()
main = do
    chan <- newChan
    _ <- forkIO $ writeChan chan "Hello, World!"
    msg <- readChan chan
    putStrLn msg
