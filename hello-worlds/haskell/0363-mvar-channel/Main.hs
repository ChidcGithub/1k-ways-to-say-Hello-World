import Control.Concurrent (forkIO, newEmptyMVar, putMVar, takeMVar)

main :: IO ()
main = do
    mvar <- newEmptyMVar
    _ <- forkIO $ do
        let msg = "Hello, World!"
        putMVar mvar msg
    result <- takeMVar mvar
    putStrLn result
