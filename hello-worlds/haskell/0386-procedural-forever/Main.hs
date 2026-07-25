import Control.Monad (forever)
import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ forever $ putStrLn "Hello, World!"
    threadDelay 100000
