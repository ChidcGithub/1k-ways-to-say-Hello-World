import Control.Parallel (par, pseq)

main :: IO ()
main =
    let hello = "Hello, "
        world = "World!"
        combined = hello `par` (world `pseq` (hello ++ world))
    in putStrLn combined
