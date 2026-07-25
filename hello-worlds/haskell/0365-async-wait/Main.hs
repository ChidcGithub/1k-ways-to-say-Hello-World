import Control.Concurrent (forkIO, newEmptyMVar, putMVar, takeMVar)

main :: IO ()
main = do
    mvar <- newEmptyMVar
    _ <- forkIO $ putStrLn "Hello, World!" >> putMVar mvar ()
    takeMVar mvar
