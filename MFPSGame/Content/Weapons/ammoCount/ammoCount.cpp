


// uncomment  line below to log to coonsole 
#define LOG_TO_CONSOLE

class ammoManager {

	private:
		int mBulletCount;
		int mMaxBullets;

	public:
		ammoManager(int aMaxBullets) { 
			maxBullets = aMaxBullets;
			bulletCount = maxBullets;
		}

		int numBulletsAvalible( ) { 
			#ifdef LOG_TO_CONSOLE 
				UE_LOG(LogTemp, Warning, TEXT"bullet queried count %d", mBulletCount)
			#endif

			return mBulletCount };
		
		removeBullet()  {
			mBulletCount--;
		}

		reload()  {
			mBulletCount = mMaxBullets;
		}

		bool isEmpty() {
			if (mBulletCount == 0){
				return true;
			}
			else{
				return false;
			}

		}


		bool isFull() {
			if (mBulletCount == mMaxBullets){
				return true;
			}
			else{
				return false;
			}
		}




}