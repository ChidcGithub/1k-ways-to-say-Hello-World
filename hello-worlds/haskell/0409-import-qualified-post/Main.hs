{-# LANGUAGE ImportQualifiedPost #-}
import Data.List qualified as L

main :: IO ()
main = putStrLn $ L.intercalate ", " ["Hello", "World!"]
