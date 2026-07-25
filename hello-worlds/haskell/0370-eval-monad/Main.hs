import Control.Parallel.Strategies (rpar, rseq, runEval)

main :: IO ()
main = do
    let result = runEval $ do
            a <- rpar ("Hello, " :: String)
            b <- rpar ("World!" :: String)
            rseq a
            rseq b
            return (a ++ b)
    putStrLn result
